import argparse
import sys
from progress.bar import Bar

def main():
  parser = argparse.ArgumentParser(description=__doc__)
  parser.add_argument("--stepno", type=int, required=True)
  parser.add_argument("--nsteps", type=int, required=True)
  parser.add_argument("--file", type=str, required=True)
  parser.add_argument("remainder", nargs=argparse.REMAINDER)
  args = parser.parse_args()

  bar = Bar(args.file, color='cyan', max=args.nsteps, index=args.stepno)
  bar.update()
  sys.stdout.write("\r")

if __name__ == "__main__":
    main()
