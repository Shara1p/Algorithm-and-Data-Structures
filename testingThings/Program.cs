namespace EncryptThis
{
    public class Kata
    {
        public static string EncryptThis(string input)
        {
            int length = 0;
            int i = 0;
            while (i != input.Length)
            {
                if (input[i] == ' ')
                {
                    continue;
                }
                while (input[i] != ' ')
                {
                    length++;
                }
                input[0] = (int)input[i];
                string temp;
                temp = input[1];
                input[1] = input[length];
                input[length] = temp;
                length = 0;
                i++;
            }
            if (input.Length == 1)
            {
                input[0] = (int)input[0];
            }
            return input;
        }
        static void Main(string[] args)
        {
            string input = "A";
            EncryptThis(input);
        }
    }
}

